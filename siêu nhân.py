class sieunhan :
    ten = ''
    vu_khi = ''
    mau_sac = ''

    def __init__(self, ten='', vu_khi='', mau_sac=''):
        self.ten = ten
        self.vu_khi = vu_khi
        self.mau_sac = mau_sac

        def __str__(self):
            return "Siêu nhân:\n Tên là: %s, \n Vũ khí: %s, \n Màu sắc: %s " %(self.ten, self.vu_khi, self.mau_sac)
        
        def read(self):
            self.ten = input("Nhập tên: ")
            self.vu_khi = input("Nhập vũ khí: ")
            self.mau_sac = input("Nhập màu sắc: ")

s = input("Chọn 1 để nhập vào danh sách, chọn 2 để quit: ")
i = 1
list = []
while s == '1':
    print('stt: ',i)
    sieunhan1 = sieunhan ()
    sieunhan1.read()
    list.append(sieunhan1)

    i +=1
    s =input("Chọn 1 để nhập vào danh sách, chọn 2 để quit: ")
    if s == '1': pass
    else:break

for s in list:
    print(s)