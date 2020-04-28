#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>

struct Node
{
char data;
struct Node *left, *right;

Node(char dat)
{
	//struct Node* Node = (struct Node*)malloc(sizeof(struct Node));
        data = dat;
        left = NULL;
        right = NULL;
//        return(Node);
}
};

struct Stack
{
	int top;
	unsigned capacity;
	struct Node* array[100];

Stack(unsigned capacity)
{
//struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
capacity = capacity;
top = 0;
//stack->array = (struct Node*) malloc(stack->capacity * sizeof(struct Node));
//return stack;
}
void push(struct Node* item)
{
//if (isFull(stack))
//return;
array[++top] = item;
//printf("%c pushed to stackn", item->data);
}
struct Node* pop()
{
//if (isEmpty(stack))
//return INT_MIN;
return array[top--];
}
};
//int isFull(struct Stack* stack)
//{ return stack->top == stack->capacity - 1; }
//int isEmpty(struct Stack* stack)
//{ return stack->top == -1; }

void visit(struct Node* current ) {
	printf("%c ", current->data);
}

int main()
{

struct Node* root=new Node('A');
root->left=new Node('B');
root->right=new Node('C');
root->left->left=new Node('D');
root->right->left=new Node('E');
root->right->right=new Node('F');
root->right->left->right=new Node('G');
root->right->right->left=new Node('H');
root->right->right->right=new Node('J');

struct Stack* stack = new Stack(100);

struct Node* P=new Node('P');

P=root;
//do{
//int x=-1;
while(1){
	if(P){
		stack->push(P);
		//visit(P);
		P=P->left;
		continue;
	}else if (stack->top){
		//printf("%cn", P->data);
		//if (P->right!=NULL)printf("%cn", P->right->data);
		//if (P->right==NULL && P->left==NULL && stack->top>=0)break;
		//if (stack->top==-1)goto label2;
		P=stack->pop();
		//while(P->left!=NULL){
			visit(P);
		//	if(stack->top==-1)break;
		//	P=pop(stack);
		//	x=1;
		//}
		//if (x=1){
			P=P->right;
			//x=-1;
		//}
		continue;
	}
break;
}
//}while(stack->top || P);
return 0;
}
