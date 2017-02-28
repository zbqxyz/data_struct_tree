#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include "common_types.h"

typedef struct _bitree {
    ElementType     data;
    struct _bitree *left_child;
    struct _bitree *right_child;
} bitree_t, *pbitree_t;

typedef enum _child {
    LEFT_CHILD  = 0x0,
    RIGHT_CHILD = 0x1,
} child_e;

BOOL        init_bitree(pbitree_t p_root);
void        destroy_bitree(pbitree_t p_root);
pbitree_t   create_bitree(void);
BOOL        clear_bitree(pbitree_t p_root);
BOOL        is_empty_bitree(const pbitree_t p_tree);
UINT32      depth_bitree(const pbitree_t p_tree);
bitree      root_bitree(const pbitree_t p_tree);
ElementType get_value_bitree(const pbitree_t p_tree, bitree_t element);
BOOL        set_bitree(pbitree_t p_tree, bitree_t element, ElementType element);
pbitree     parent_bitree(pbitree_t p_tree, bitree_t element);
pbitree     left_child_bitree(pbitree_t p_tree, bitree_t element);
pbitree     right_child_bitree(pbitree_t p_tree, bitree_t element);
pbitree     left_sibling_bitree(pbitree_t p_tree, bitree_t element);
pbitree     right_sibling_bitree(pbitree_t p_tree, bitree_t element);
BOOL        insert_child_bitree(pbitree_t p_tree, pbitree_t p_element, child_e child, pbitree new_tree);
BOOL        del_child_bitree(pbitree_t p_tree, pbitree_t p_element, child_e child);
BOOL        pre_order_traverse_bitree(const pbitree_t p_tree, void (*visit)(ElementType element));
BOOL        in_order_traverse_bitree(const pbitree_t p_tree, void (*visit)(ElementType element));
BOOL        post_order_traverse_bitree(const pbitree_t p_tree, void (*visit)(ElementType element));
BOOL        level_order_traverse_bitree(const pbitree_t p_tree, void (*visit)(ElementType element));

#endif /* BINARY_TREE_H_ */