def palindrome(str):
    str = str.replace(',','').replace(' ', '').replace('\'', '').replace('.', '')
    qu = []
    st = []
    for x in str:
        if x.isalpha():
            qu.append(x.lower())
            st.append(x.lower())
    while qu:
        if qu.pop(0) != st.pop():
            return False
    return True


print(palindrome("Madam, i'm Adam."))