#include<stdio.h>
#include<conio.h>
void nhapmang(int a[50],int n);
void xuatmang(int a[50],int n);
void max(int a[50],int n);
void tinhtich(int a[50],int n);
void dem(int a[50],int n);
void nhapx(int a[50],int n);
void sapxep(int a[50],int n);
void xoaphantu(int a[50],int n);
void Count_Prime(int a[50],int n);
int Is_prime(int n);


int main()
{
	int a[50], n;
	printf("nhap so phan tu mang:");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);
	tinhtich(a,n);
 	Count_Prime(a,n);
 	nhapx(a,n);
 	sapxep(a,n);
   xuatmang(a,n);
   xoaphantu(a,n);
	return 0;
}
	void nhapmang(int a[50],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
		printf("\n phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
		}
	}
	void xuatmang(int a[50],int n)
	{
		int i;
		printf("\n mang vua nhap la:");
		for(i=0;i<n;i++)
		{
		printf("\n %d",a[i]);
		}
	}                      
	void max(int a[50],int n)
	{ 
	  int max=a[0];
	  for(int i=0;i<n;i++)
	  if(max<a[i])
	    max=a[i];
	    printf("\n phan tu lon nhat la %d",max);
    }  
    void tinhtich(int a[50],int n)
    {
    	int tich=1;
    	for(int i=0;i<n;i++)
    	tich=tich*a[i];
    	printf("\n tich cac phan tu trong mang =%d",tich);
    }	
   void dem(int a[50],int n)
    {
    	int k=1, dem=0; 
    	for(int i=0;i<n;i++)
    	if(a[i]%k==0)
    	{
    	dem++;
    	}
    	printf("\n cac so nguyen to trong mang la:%d",dem++);
    	int tong;
    	for(int i=0;i<n;i++)
    	tong=tong+a[i];
    	printf("\n tong cac phan tu trong mang= %d",tong);
    }
    
// My program
int Is_prime(int n)
{
	int i;
	for ( i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return 1;    
}

void Count_Prime(int a[50],int n)
{
	int i,j,count=0;
	for (i=0; i<n; i++)
	{
		if (Is_prime(a[i]) == 1)
		{
			count++;
		}
	}
	printf("\nDem cac so ngt: %d", count);
}
 void nhapx(int a[50],int n)
  {
  	int x;
    printf("\n nhap gia tri x=");
    scanf("%d",&x);
    for(int i=0;i<n;i++) 
{
    if(x==a[i])
    {
    printf("\n x=%d bang phan tu vi tri thu a[%d]",x,i);
    }
    
}
   }
   void sapxep(int a[50],int n)
  {
  	int tam;
   for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
     tam=a[i];
     a[i]=a[j];
     a[j]=tam;   
    }    
   } 	
    void xoaphantu(int a[50], int n)
 {
 	int j,k;
  printf("nhap phan tu k=");
  scanf("%d",&k);
  for(int i=0;i<n;i++)
  {
	    if(a[i]==k)
	  {
	   for(j=i;j<n-1;j++)
	   a[j]=a[j+1];
	  }
	   n--;
	   i--;	
  }
 }
  


 