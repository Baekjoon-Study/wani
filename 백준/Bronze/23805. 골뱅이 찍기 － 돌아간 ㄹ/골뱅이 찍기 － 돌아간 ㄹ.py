n = int(input())
for _ in range(n):
    print(f'{"@"*3*n}{" "*n}{"@"*n}')
for _ in range(n*3):
    print(f"{'@'*n}{' '*n}{'@'*n}{' '*n}{'@'*n}")
for _ in range(n):
    print(f'{"@"*n}{" "*n}{"@"*n*3}')