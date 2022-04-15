#include <stdio.h>
#include "tree.h"

int main()
{
    Tree asscar;
    Tree* tree = &asscar;
    TreeCtor(tree);
    /*
    node_data_t data;
    MAKE_DATA(data, INTEGER, i, 1) 
    PRINT_LINE
    THEAD->n_data = data;
    data.data.i = 11;
    NodeInsert (THEAD, data, LEFT_N);
    data.data.i = 12;
    NodeInsert (THEAD, data, RIGHT_N);
    data.data.i = 111;
    NodeInsert (THEAD->left_node, data, LEFT_N);
    data.data.i = 121;
    NodeInsert (THEAD->right_node, data, LEFT_N);
    data.data.i = 112;
    NodeInsert (THEAD->left_node, {INTEGER, 112}, RIGHT_N);
    char str[5] = "jopa";
    MAKE_DATA(data, STR, cp, str);
    NodeInsert (THEAD->right_node, data, RIGHT_N);
    PRINT_LINE
    TreeDump(tree);
    PRINT_LINE
    FILE* tree_file = fopen ("saved_tree_after.txt", "w");
    TreeSave (tree, tree_file);
    fclose (tree_file);
    */
    FILE* tree_file = fopen ("saved_tree.txt", "r");
    char* buffer = TreeTake (tree, tree_file);
    fclose (tree_file);
    FILE* tree_file1 = fopen ("saved_tree.txt", "w");
    TreeDump (tree);

    TreeSave(tree, tree_file1);
    fclose (tree_file1); 
    TreeDtor (tree);
    //PRINT_LINE
    

    free (buffer);
    /**/
    //PRINT_LINE
    return 0;
}