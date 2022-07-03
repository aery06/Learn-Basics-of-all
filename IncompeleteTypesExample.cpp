#include <iostream>
using namespace std;

// Compiler will make you compile all the data type those are complete and whose sizes are known to the compiler.
// Inside structure we can't define the struct type variable example:
// struct linkListNode {
//    int nodeValue;
//    linkListNode nextNodeRef;  ***** NOT ALLOWED *****
//    linkListNode *nextNodeRef; ***** ALLOWED *******
// };
// The not allowed case is the classic example of concept INCOMPLETE Type;
// concept reference https://docs.microsoft.com/en-us/cpp/c-language/incomplete-types?view=msvc-170
// If a data type is not know  to the compiler than we can't use that type of variable.
// Pointer size is always known to the compiler, that's how compiler allowed to run the Incomplete data type pointer.
struct linkListNode {
   int nodeValue;
   linkListNode *nextNodeRef;
};


int main(){
    linkListNode linkList;
    linkList.nodeValue = 10;
    // linkList.nextNodeRef  = linkList;
    
    // cout << "LinkList node value : " << linkList->nodeData << endl;
    cout << "Linklist node data : " << linkList.nodeValue << endl;
    
    return 1;
}