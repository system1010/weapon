#include<iostream>
//#include<stdlib.h>

struct Node
{
char data;
struct Node *left, *right;
Node(char dat)
{
        data = dat;
        left = NULL;
        right = NULL;
}
};

struct Stack
{
	int top;
	unsigned capacity;
	struct Node* array[100];

Stack(unsigned capacity)
{
capacity = capacity;
top = 0;
}
void push(struct Node* item)
{
if (isFull())
return;
array[++top] = item;
}
struct Node* pop()
{
if (isEmpty())
return NULL;
return array[top--];
}
int isFull()
{ return top == capacity - 1; }
int isEmpty()
{ return top == -1; }
};
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

printf(" inOrder\n");

P=root;


while(1){
        if(P){
        stack->push(P);
        visit(P);
        P=P->left;
        continue;
        }else if (stack->top){
        P=stack->pop();
        //     visit(P);
        P=P->right;
        continue;
        }
break;
}

struct Stack* s1 = new Stack(100);
struct Stack* s2 = new Stack(100);

 struct Node* node=new Node('N');

 // push root to first stack
  s1->push(root);
   //Node* node;
   // Run while first stack is not empty
  while (s1->top) {
  // Pop an item from s1 and push it to s2
  //node = s1->top;
  node=s1->pop();
  s2->push(node);
  // Push left and right children
  // of removed item to s1
  if (node->left)s1->push(node->left);
  if (node->right)s1->push(node->right);
   }
printf(" preOrder \n");
  while(s2->top)
  visit(s2->pop());
  printf(" postOrder \n");
return 0;
}

/*

Time Complexity: O(n)
Let us see different corner cases.
Complexity function T(n) — for all problem where tree traversal is involved — can be defined as:




T(n) = T(k) + T(n – k – 1) + c

Where k is the number of nodes on one side of root and n-k-1 on the other side.

Let’s do an analysis of boundary conditions

Case 1: Skewed tree (One of the subtrees is empty and other subtree is non-empty )

k is 0 in this case.
T(n) = T(0) + T(n-1) + c
T(n) = 2T(0) + T(n-2) + 2c
T(n) = 3T(0) + T(n-3) + 3c
T(n) = 4T(0) + T(n-4) + 4c

…………………………………………
………………………………………….
T(n) = (n-1)T(0) + T(1) + (n-1)c
T(n) = nT(0) + (n)c

Value of T(0) will be some constant say d. (traversing a empty tree will take some constants time)

  T(n) = n(c+d)
  T(n) = Θ(n) (Theta of n)

  Case 2: Both left and right subtrees have equal number of nodes.

  T(n) = 2T(|_n/2_|) + c

  This recursive function is in the standard form (T(n) = aT(n/b) + (-)(n) ) for master method http://en.wikipedia.org/wiki/Master_theorem. If we solve it by master method we get (-)(n)

  Auxiliary Space : If we don’t consider size of stack for function calls then O(1) otherwise O(n).
  */
