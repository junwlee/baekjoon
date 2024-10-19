T = int(input())
exchange = []
for _ in range(T):
    C = int(input())
    
    quarter = C // 25
    q_r = C % 25

    dime = q_r // 10
    d_r = q_r % 10

    nickel = d_r // 5
    n_r = d_r % 5

    penny = n_r // 1

    tup = (quarter, dime, nickel, penny)
    exchange.append(tup)

for i in range(len(exchange)):
    print(exchange[i][0], exchange[i][1], exchange[i][2], exchange[i][3])