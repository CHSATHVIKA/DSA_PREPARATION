📘 TIME COMPLEXITY CHEAT SHEET (DSA BASICS)

---

 🧠 1. CORE IDEA

Time complexity measures how operations grow as input size n increases.

We ignore constants and lower terms, focus only on dominant growth.

---

 ⚡ 2. BASIC RULES

🔹 Sequential operations
O(a) + O(b) = O(max(a, b))

Example:
O(n) + O(log n) = O(n)

---

🔹 Nested loops
Multiply complexities

Example:
O(n) × O(n) = O(n²)

---

 🔁 3. LOOP PATTERNS

🔹 Simple loop
for(i = 0; i < n; i++)
→ O(n)

---

🔹 Nested loop
for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
→ O(n²)

---

🔹 Dependent loop
for(i = 0; i < n; i++)
  for(j = 0; j < i; j++)

Sum = 1 + 2 + 3 + ... + n
→ O(n²)

---

 ⚡ 4. LOGARITHMIC PATTERNS

🔹 Divide by 2
i = i / 2
→ O(log n)

Meaning: how many times n can be divided by 2 until 1.

---

🔹 Multiply by 2
i = i * 2
→ O(log n)

---

🔹 Rule
If value is halving/doubling → log n

---

 📏 5. SQUARE ROOT PATTERN

for(i = 1; i * i <= n; i++)
→ O(√n)

Reason: i runs till √n

---

 📊 6. HARMONIC SERIES PATTERN

Example:
for i = 1 to n:
    inner loop runs n / i times

Total:
T(n) = Σ (n / i)
     = n Σ (1 / i)

---

🔥 Key fact:
1 + 1/2 + 1/3 + ... + 1/n ≈ log n

---

FINAL RESULT:
O(n log n)

---

 🔥 7. QUICK IDENTIFICATION TABLE

| Pattern | Complexity |
|--------|-----------|
| i++ | O(n) |
| i *= 2 or i /= 2 | O(log n) |
| i*i <= n | O(√n) |
| nested loops | O(n²) |
| n/i pattern | O(n log n) |
| sequential code | max term |

---

 🧠 8. FAST SOLVING STEPS

Step 1:
Identify loop type:
- linear → O(n)
- doubling/halving → O(log n)
- square condition → O(√n)

Step 2:
Check nesting:
- nested → multiply
- sequential → take max

Step 3:
Check special pattern:
- n/i → harmonic → O(n log n)

---

⚡ 9. MEMORY TRICKS

- i++ → O(n)
- i = i/2 → O(log n)
- i*i ≤ n → O(√n)
- n/i sum → O(n log n)
- nested loops → multiply
- sequential → max only

---
