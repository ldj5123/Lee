class block_factory:
    def __init__(self, company):
        self.company = company

newblock = block_factory('Gole')
newblock.color = 'blue'
newblock.shape = 'long'

print('블록 정보 출력')
print('제조 회사 :', newblock.company)
print('블록 컬럭 :', newblock.color)
print('블록 모양 :', newblock.shape)