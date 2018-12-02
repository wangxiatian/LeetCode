int maxArea(int* height, int heightSize) {
    int maxS=0,t=0;
    int i=0,j=heightSize-1;
    for(;i<j;)
    {
        if(height[i]<height[j])
        {
            t=height[i]*(j-i);
            i++;
        }
        else{
            t=height[j]*(j-i);
            j--;
        }
        if(t>maxS)
        {
            maxS=t;
        }
    }
    return maxS;
}