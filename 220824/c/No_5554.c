#include <stdio.h>

int main(void)
{
    int home_school, school_pc, pc_academy, academy_home;
    int total_time;
    int m, s;
    
    scanf("%d\n", &home_school);
    scanf("%d\n", &school_pc);
    scanf("%d\n", &pc_academy);
    scanf("%d", &academy_home);
    
    total_time = home_school + school_pc + pc_academy + academy_home;
    m = total_time / 60;
    s = total_time % 60;
    
    printf("%d\n%d", m, s);
    
    return 0;
}