import sys
input = sys.stdin.readline
n = int(input())
user_num = sorted(list(map(int,input().split())))
m = int(input())
com_num = list(map(int,input().split()))
count_dict = {}
for user in user_num:
    if user in count_dict:
        count_dict[user] += 1
    else:
        count_dict[user] = 1
for com in com_num:
    if com in count_dict:
        print(count_dict[com],end=' ')
    else:
        print(0,end=' ')