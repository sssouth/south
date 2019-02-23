#两个乒乓球队进行比赛,各出3人,甲队为a,b,c 3人,甲队为x,y,z 3人.抽签决定比赛名单.有人向队员打听比赛的名单,a说他不和x比,c说他不和x,z比,找出3对赛手的名
a_list=['x','y','z']  #假设i,j,k分别是a,b,c的对手
for i in a_list:
    for j in a_list:
        if i!=j:    #三人的对手不能是同一人,故i!=j
            for k in a_list:
                if i!='x' and k!='x' and k!='z' and i!=k and j!=k:  #满足a不和x比,c不和x,z比
                    print("a--%s,b--%s,c--%s"%(i,j,k))
