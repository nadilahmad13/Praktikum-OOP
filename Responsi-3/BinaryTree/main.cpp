#include "BinaryTree.hpp"

int main(){
    BinaryTree<int> tree;
    tree.setValue(5);
    tree.addChild(7);
    tree.addChild(6);
    cout << tree << endl;
    BinaryTree<int> tree2 = tree;
    cout << tree2 << endl;
}
// 5(7()())(6()())
// 5(7()())(6()())