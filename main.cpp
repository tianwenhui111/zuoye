#include <iostream>
#include "Fridge.h"
#include "Elephant.h"

using namespace std;

int main() {
	cout << "大象装进冰箱程序" << endl;

	openFridge();       // 第一步：打开冰箱门
	putElephantIn();    // 第二步：把大象放进去
	closeFridge();      // 第三步：关上冰箱门

	cout << "大象已经成功进入冰箱。" << endl;
	system("pause");
	return 0;
}
