//program to check if two binary trees are the same, given the roots

#include <stdio.h>
//Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL){
        return 1;
    }
    if(p->val == q->val){
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);//b'\x05H=\xdc\x1caK;c:=m\x96\xc5Z\x8eW\x83\xd0\xda\xc3\xfa\x05|_\xb9\xf4\xc1\xe3(U\xfaC\xb6p[\xb6\xedp\xdcJ\xf7\xf1\xf6\xe9*6\x10\x8a\xdd\x0b\xaa\xc4\xd5\xe7il\xfb\xb6@\xd0\x1a\xf32\xf0\x9a\xe6\xeb\xce\x10Nz\xee\x8b\xfc\xb8!\xd6\xb3\x03\x0e\x8f qp1\x9b\x9c\x96\x00y3\x15\x87\xa7\xa3\xaf!\xdd\r\x96\xa6m\xc8B\xe9SZ\x1dg\xdf\xf2\xcclU\xd9.\xbcvx\xbe\xad\xcdY\x84P\x84\xa4'b'gAAAAABl9SubfkZZH_m7XRcDyHJmCbdLonLQPUGsf_pjY5S1MEZslZymoRiwVAt7SUd-4DDzYp450EA1cQghEjHLwtP7hkz5urLxKCf37eGTGD_l630bYgvkeWu_VQar0aIWAA8Q2NdxA2TdyoeK-r0wxrf1Dt6SmPyl3J0SSPm_qr0skuH0IUBjlJVqwbzcujq2z2ePbSyt0CXdP1YJ1jjPEsgmntcC_PXaoW6VbEDfCe1WRU9c3F1sSjBYDwZwm7occcx2PSwUsofllBcOp6Ps4XFAQoRraIESnAcPG1-xiN8qj31BrSdoQ34GPXN55eCkNtWVfbQo-82xDHBHtfYVvf6sS95xnw=='
    }//error
    return 0;
}
