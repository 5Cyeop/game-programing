#include "status.h"
#include "w_upgrade.h"

extern int lv;
extern int cur;
extern char *grade[6];
extern int a;
extern int upgrade_point;
extern int evolve_point;


void W_Status()
{
	printf("등급: %s, 레벨: %d, 공격력: %d\n\n", grade[a], lv, cur);
}

void Inv()
{

}
