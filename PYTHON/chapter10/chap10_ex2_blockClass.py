class block_factory:
    def __init__(self, company, color, shape):
        self.company = company
        self.color = color
        self.shape = shape

newblock = block_factory('Gole', 'blue', 'long')
newblock2 = block_factory('Gole', 'black', 'short')
newblock3 = block_factory('0xfold', 'red', 'big')


print('블록 정보 출력')
print('제조 회사 :', newblock.company, '블록 컬러 :', newblock.color, '블록 모양 :',newblock.shape)
print('제조 회사 :', newblock2.company, '블록 컬러 :', newblock2.color, '블록 모양 :',newblock2.shape)
print('제조 회사 :', newblock3.company, '블록 컬러 :', newblock3.color, '블록 모양 :',newblock3.shape)