#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rlink,*llink;
};

struct node* insertNode(int val, struct node *root){

    struct node *new =(struct node*)malloc(sizeof(struct node));
        new->data = val;
        new->rlink =NULL;
        new->llink = NULL;
        if(root == NULL)
            return new;
        struct node *prv =NULL;
        struct node *cur = root;
        while(cur != NULL){
            prv = cur;
        if(val > cur->data)
            cur = cur->rlink;
        else
            cur = cur->llink;}
     if(val >prv->data)
        prv->rlink = new;
    else
        prv->llink = new;
    return root;
}
void inorder(struct node*root){
    if(root == NULL)
        return ;
    inorder(root->llink);
    printf("\n%d->",root->data);
    inorder(root->rlink);    
}

void preorder(struct node*root){
    if(root == NULL)
        return ;
        printf("\npre=%d->",root->data);
    preorder(root->llink);
    preorder(root->rlink);    
}
void postorder(struct node*root){
    if(root == NULL)
        return ;
    postorder(root->llink);
    postorder(root->rlink);   
    printf("\npre=%d->",root->data); 
}
int count_leaf(struct node *root){
    int count;
    if(root == NULL){ return 0;}
    else if(root->llink == NULL && root->rlink == NULL){
            return 1;
    }
    else{
        return(count_leaf(root->llink) + count_leaf(root->rlink));
    }
}
struct node *deleteNode(struct node *root,int val){
    struct node *cur = root,*prev=NULL,*q,*suc;
    while(cur!= NULL && cur->data != val){
        prev = cur;
        if(val <cur->data){
            cur = cur->llink;
        }
        else{
            cur= cur->rlink;
        }
    }
    if(prev == NULL){printf("in preve");}
    if(cur == NULL){
        printf("\nnot found");
        return NULL;
    }
    if(cur->rlink == NULL){
        q= cur->llink;
    }
    else if(cur->llink == NULL){
        q= cur->rlink;
    }
    else{
        suc=q=cur->rlink;
        while(suc->llink != NULL){
            suc=suc ->llink;
        } 
        suc->llink = cur->llink;
    }
    if(prev == NULL){
        printf("\n in prev found");
        return q;
    }
    if(prev->rlink = cur){
        prev->rlink = q;
    }
    else if(prev->llink = cur){
        prev->llink = q;
    }
    printf("\nfreeing");
    free(cur);
    return root;
}

void Searching(struct node *root , int val){
    struct node *cur = root,*prev=NULL;
    if(root == NULL){
        printf("trees is empty");
        return;
    }
    while(cur!= NULL && cur->data != val){
        prev = cur;
        if(val <cur->data){
            cur = cur->llink;
        }
        else{
            cur= cur->rlink;
        }
    }
    if(cur == NULL){
        printf("\nnot found");
        return;
    }
    else{
        printf("the node found:%d",cur->data);
    }
    if(prev == NULL){printf("\nits the root node");}
    else{
        printf("\n the parent node:%d->",prev->data);
    }
}

int countNodes(struct node *root){
    if(root == NULL){
        return 0;
    }
    else{
    return (countNodes(root->llink)+countNodes(root->rlink)+1);}
}
int max(int a, int b){
    return(a>b)?a:b;
}
int heigth(struct node *root){
    if(root == NULL){return 0;}
    else{
        return 1 + max(heigth(root->llink),heigth(root->rlink));
    }
}
int minma(struct node *root){
    struct node *cur = root;
    printf("minb");
    if(root == NULL){
        return 0;
    }
    while(cur->llink != NULL){
        cur = cur->llink;
    }
    printf("\n the min val is:%d", cur->data);
    return cur->data;
}
int mixma(struct node *root){
    struct node *cur = root;
    if(root == NULL){
        return 0;
    }
    while(cur->rlink != NULL){
        cur = cur->rlink;
    }
    printf("\n the min val is:%d", cur->data);
    return cur->data;
}
void main(){
    struct node *root=NULL ;
    int val , i=0,cou;
    while(i<5){
        printf("enter val:");
        scanf("%d",&val);
    root=insertNode(val,root);
     i++;}
    // printf("%d", root->llink->rlink);
     inorder(root);
    // preorder(root);
     //postorder(root);
    //cou = count_leaf(root);
    //printf("\n%d", cou);
    //printf("enter val to delete:");
    //scanf("%d",&val);
    //root = deleteNode(root ,val);
    //inorder(root);
    //printf("enter val:");
       // scanf("%d",&val);
    //Searching(root ,val);
    //val =countNodes(root);
    //printf("number of nodes:%d",val);
    //val = heigth(root);
    printf("number of nodes:");
    val = minma(root);
    printf("number min nodes:%d",val);
    val = mixma(root);
    printf("number min nodes:%d",val);
}