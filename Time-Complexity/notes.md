# Time Complexity Notes

## Single Loop

for(i=0; i<n; i++)
→ O(n)

---

## Nested Loop

for(i=0; i<n; i++)
    for(j=0; j<n; j++)

→ O(n²)

---

## Triangular Loop

for(i=0; i<n; i++)
    for(j=0; j<=i; j++)

1 + 2 + 3 + ... + n

→ n(n+1)/2
→ O(n²)