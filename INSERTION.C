 #include<stdio.h>
 int main(){
  int a[10],pos,n=8, element,i;
  printf("enter the array element");
  for(int i=0;i<n;i++) {
      scanf("%d",&a[1]);
    }
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&element);
    for(i=n;i>pos-1;i--){
    a[i]=a[i-1];
    }
    a[pos-1]=element;
    n++;
    printf("array after insertion");
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
