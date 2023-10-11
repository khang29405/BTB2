#include<stdio.h>
#include<conio.h>
void nhapmang(int a[50],int n);
void xuatmang(int a[50],int n);
void max(int a[50],int n);
void tinhtich(int a[50],int n);
/*void dem(int a[50],int n);*/
/*void nhapx(int a[50],int n);*/
void sapxep(int a[50],int n);
int main()
{
	int a[50], n;
	printf("nhap so phan tu mang:");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);
	tinhtich(a,n);
 	/*dem(a,n);*/
 	/*nhapx(a,n);*/
 	sapxep(a,n);
    xuatmang(a,n);
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
		printf("mang vua nhap la:");
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
 /*  void dem(int a[50],int n)
    {
    	int k=1, dem=0;
    	for(int i=0;i<n;i++)
    	if(a[i]%k==0)
    	{
    	dem++;
    	printf("%d",dem++);
    	}
    }*/
 /* void nhapx(int a[50],int n)
  {
    int x;
    printf("\n nhap gia tri x=");
    scanf("%d",&x);
    for(int i=0;i<n;i++) 
    if(x=a[i])
    {
    printf("/n x bang vi tri phan tu thu a[%d]",i);
    }
	else 
	{
	printf("gia tri khong hop le ");   
	}
   }*/
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

	
	    	                                                                                                                                                                                                                                                                                                                              
	
