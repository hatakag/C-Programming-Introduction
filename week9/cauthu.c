#include <stdio.h>
int main()
{
  int i,s[11];
  float a[11],b[11],c[11],d[11],e[11],f[11];
  for (i=0;i<11;i++) {
    printf("Cau thu ao so: ");
    scanf("%d",&s[i]);__fpurge(stdin);
    if (s[i]<0) {
      printf("So ao phai lon hon hoac bang 0\n");
      return 0;
    }
    printf("Diem danh gia cua 5 chuyen gia 1=>5: ");
    scanf("%f %f %f %f %f",&a[i],&b[i],&c[i],&d[i],&e[i]);__fpurge(stdin);
  }
  for (i=0;i<11;i++) {
    f[i]=(a[i]+b[i]+c[i]+d[i]+e[i])/5;
    printf("So ao: %d\t - \tDiem: %.1f\n",s[i],(int)f[i]+0.5);  
  }
  int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
  for (i=0;i<11;i++) {
    sum1+=a[i];
    sum2+=b[i];
    sum3+=c[i];
    sum4+=d[i];
    sum5+=e[i];
  }
  if (sum1>=sum2&&sum1>=sum3&&sum1>=sum4&&sum1>=sum5) 
    printf("\nChuyen gia thu nhat la nguoi danh gia rong rai nhat\n");
  if (sum2>=sum1&&sum2>=sum3&&sum2>=sum4&&sum2>=sum5) 
    printf("\nChuyen gia thu hai la nguoi danh gia rong rai nhat\n");
  if (sum3>=sum1&&sum3>=sum2&&sum3>=sum4&&sum3>=sum5) 
    printf("\nChuyen gia thu ba la nguoi danh gia rong rai nhat\n");
  if (sum4>=sum1&&sum4>=sum2&&sum4>=sum3&&sum4>=sum5) 
    printf("\nChuyen gia thu tu la nguoi danh gia rong rai nhat\n");
  if (sum5>=sum1&&sum5>=sum2&&sum5>=sum3&&sum5>=sum4) 
    printf("\nChuyen gia thu nam la nguoi danh gia rong rai nhat\n");
  if (sum1<=sum2&&sum1<=sum3&&sum1<=sum4&&sum1<=sum5) 
    printf("\nChuyen gia thu nhat la nguoi danh gia khat khe nhat\n");
  if (sum2<=sum1&&sum2<=sum3&&sum2<=sum4&&sum2<=sum5) 
    printf("\nChuyen gia thu hai la nguoi danh gia khat khe nhat\n");
  if (sum3<=sum1&&sum3<=sum2&&sum3<=sum4&&sum3<=sum5) 
    printf("\nChuyen gia thu ba la nguoi danh gia khat khe nhat\n");
  if (sum4<=sum1&&sum4<=sum2&&sum4<=sum3&&sum4<=sum5) 
    printf("\nChuyen gia thu tu la nguoi danh gia khat khe nhat\n");
  if (sum5<=sum1&&sum5<=sum2&&sum5<=sum3&&sum5<=sum4) 
    printf("\nChuyen gia thu nam la nguoi danh gia khat khe nhat\n");
  return 0;
}
