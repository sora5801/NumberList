
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList list;

	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);

	cout << "here are the initial values:\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the node in the middle.\n";
	list.deleteNode(7.9);

	cout << "here are the nodes left.\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the last node.\n";
	list.deleteNode(12.6);

	cout << "here are the nodes left.\n";
	list.displayList();
	cout << endl;

	cout << "Now deleting the onlyremaining node.\n";
	list.deleteNode(2.5);

	cout << "Here are the nodes left.\n";

	list.displayList();
	system("pause");
}