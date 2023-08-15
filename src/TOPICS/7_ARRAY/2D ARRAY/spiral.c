// Welcome to EXPLORER's IDE

#include<stdio.h>

int main() {
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i=0,j=0;
int cs=0,ce=2,rs=0,re=2;
for(rs,cs;cs<=ce;cs++){
    printf("%d ",arr[rs][cs]);
}
printf("\n%d %d %d %d\n",cs,ce,rs,re);
    rs=rs+1;
    for(ce,rs,cs;rs<=re;rs++,cs--) {
        printf("%d ", arr[rs][ce]);

    }
    printf("\n%d %d %d %d\n",cs,ce,rs,re);
    ce=ce-1;
    for(re,rs,ce;ce>=cs;rs--,ce--){
        printf("%d ",arr[re][ce]);

    }
    cs--;
    printf("\n%d %d %d %d\n",cs,ce,rs,re);

    for(re,cs,ce;re>=rs;re--){
        printf("%d ",arr[re][cs]);
    }


printf("\n%d %d %d %d\n",cs,ce,rs,re);

    return 0;
}
