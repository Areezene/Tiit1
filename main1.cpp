#include <iostream>
#include <vector>
#include "AVL-tree.h"

using namespace std;

int main()
{
    node* root = build(5);
    insert(root, 10, 0);
    insert(root, 7, 0);
    insert(root, 1, 0);
    insert(root, 2, 0);
    insert(root, 99, 0);
    insert(root, 23, 0);
    insert(root, 5, 0);
    cout << findmin(root)->value << endl;
    cout << findmax(root)->value << endl;
    remove(root, 1);
    remove(root, 99);
    cout << findmin(root)->value << endl;
    cout << findmax(root)->value << endl;
    return 0;
}
