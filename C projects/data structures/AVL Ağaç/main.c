#include<stdio.h>
#include<stdlib.h>
// AVL a�ac� i�in d���m
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
int max(int a, int b)
{
    return (a > b)? a : b;
}
struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;
    // Yeni d���m ilk olarak yaprakta eklenir
    return(node);
}

struct Node *rightRotate(struct Node *y)

{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    // D�nd�rme
    x->right = y;
    y->left = T2;
    // Y�kseklikler g�ncelleniyor
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
    // yeni kok
    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;
    // d�nd�rme
    y->left = x;
    x->right = T2;
    //  Y�kseklikler g�ncelleniyor
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
    // yeni kok
    return y;
}

// N. d���m i�in denge fakt�r�
int getBalance(struct Node *N)
{
    if (N == NULL)		return 0;
    return height(N->left) - height(N->right);
}
struct Node* insert(struct Node* node, int key)
{
    /* BST a�ac�na ekleme */
    if (node == NULL)  return(newNode(key));
    if (key < node->key)  node->left  = insert(node->left, key);
    else if (key > node->key)  node->right = insert(node->right, key);
    else  return node;
    /* 2. Y�kseklikler g�ncelleniyor */
    node->height = 1 + max(height(node->left), height(node->right));
    /* 3. Yeni ekleme i�lemi ile denge hesaplan�yor */
    int balance = getBalance(node);
    // Eklenen d���m dengesiz ise 4 durum vard�r
    // Solun solu
    if (balance > 1 && key < node->left->key)	return rightRotate(node);
    // Sa��n sa��
    if (balance < -1 && key > node->right->key)  return leftRotate(node);
    // Solun sa��
    if (balance > 1 && key > node->left->key)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);

    }
    // Sa��n solu
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
// A�a� i�inde dola�ma
void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d %d \n", root->key,root->height);
        preOrder(root->left);
        preOrder(root->right);
    }
}


int main()
{
    struct Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    printf("AVL a�ac�nda Preorder dola�ma:\n");
    preOrder(root);
       	return 0;

}



