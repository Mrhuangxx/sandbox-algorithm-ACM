long long a[]={0,1, 2, 4, 10, 32, 122, 544, 2770, 15872, 101042, 707584, 5405530, 44736512, 398721962, 3807514624, 38783024290, 419730685952, 4809759350882, 58177770225664, 740742376475050};
main()
{
  int t,n;
  for(scanf("%d",&t);t--;)
  {
    scanf("%d",&n);
    printf("%lld\n",a[n]);
  }
}