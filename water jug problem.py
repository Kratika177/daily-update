curr1=0
curr2=0
cap1=5;
cap2=3;
print("1. fill jug 1\n2. fill jug 2\n3. from jug 1 to jug 2 if both empty\n4. from jug 2 to jug 1 if both empty\n5. empty jug 1\n6. empty jug 2\n7. put some water from 1 to 2\n8. put some water from 2 to 1")
print("Target= 4 litres in jug 1")
while(curr1!=4):
    print("current value of jug 1 is",curr1,"\ncurrent value of jug 2 is",curr2)
    rule=input("Enter the rule number ")
    if (int(rule)==1):
        curr1=curr1+(cap1-curr1);
    elif(int(rule)==2):
        curr2=3;
    elif(int(rule)==3):
        curr2=3;
        curr1=2;
    elif(int(rule)==4):
        curr1=3;
        curr2=0;
    elif(int(rule)==5):
        curr1=0;
    elif(int(rule)==6):
        curr2=0;
    elif(int(rule)==7):
        if(curr1<cap2-curr2):
            curr2=curr2+curr1
            curr1=0
            
        elif(curr1>cap2-curr2):
            curr1=curr1-(cap2-curr2)
            curr2=3;
            
        
    elif(int(rule)==8):
        x=cap1-curr1;
        curr2=curr2-x;
        curr1=curr1+x
print("current value of jug 1 is",curr1,"\ncurrent value of jug 2 is",curr2)
    
