from collections import Counter

text = "A press release is the quickest and easiest way to get free publicity. If well written, a press release can result in multiple published articles about your firm and its products. And that can mean new prospects contacting you asking you to sell to them."

text1 = text.split()
text2 = text.split()
for i in range(len(text1)):
    count = 1
    for j in range(1, len(text1)):
        if text1[0] != 0 and text1[j] != 0 and text1[j].upper() == text1[0].upper():
            count += 1
            text1[j] = 0
    if text1[0] != 0:
        print(text1[0], count)
    text1.pop(0)
