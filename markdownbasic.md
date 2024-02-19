## push code commit
### Mục lục
[I. Cài đặt Git]

[1. Cài đặt Git trên Windows](#CaidatGittrenWindows)
[2. Cài đặt Git trên Mac](CaidatGittrenMac)
[3. Cài đặt Git trên Linux (Ubuntu)](CaidatGittrenLinux)

[II. Local Repository](#LocalRepository)

[III. Clone repo về máy](#Clonerepovemay)

[IV. Push code lên git](#Pushcodelengit)

## I. Cài đặt Git
Đầu tiên, hãy chắc chắn rằng máy tính của bạn đã được cài đặt Git, gõ lệnh `git version` để kiểm tra. Kết quả hiện ra sẽ cho bạn biết phiên bản mà Git được cài đặt, hoặc nếu chưa, nó sẽ báo `git is an unknown command`. Nếu chưa được cài đặt, thực hiện những bước dưới đây tùy theo từng hệ điều hành của bạn:

### 1. Cài đặt Git trên Windows
Đi đến [trình cài đặt Git dành cho Windows](https://git-scm.com/download/win) và tải xuống phiên bản mới nhất.

Khi trình cài đặt đã bắt đầu, hãy làm theo các hướng dẫn được cung cấp trong màn hình hướng dẫn Cài đặt Git cho đến khi quá trình cài đặt hoàn tất.

Mở **command prompt** (hoặc **Git Bash**) rồi gõ `git version` để xác định Git đã được cài đặt thành công cùng phiên bản của nó.

### 2. Cài đặt Git trên Mac
Hầu hết các phiên bản của MacOS đã cài đặt Git, và bạn có thể kích hoạt thông qua Terminal với git version. Tuy nhiên, nếu Git chưa được cài đặt vì một lý do nào đó, bạn hãy làm theo các bước sau:

Đi đến [trình cài đặt Git dành cho MacOS](https://git-scm.com/download/mac) và tải xuống phiên bản mới nhất. Sau đó, thực hiện việc cài đặt theo hướng dẫn.

Mở **terminal**, rồi gõ `git version` để kiểm tra.

### 3. Cài đặt Git trên Linux
Mở **command prompt** và chạy dòng lệnh `sudo apt-get update` để chắc chắn rằng mọi thứ đều được cập nhật.

Sau đó, để cài đặt Git, chạy dòng lệnh:`sudo apt-get install git-all`.

Xác minh cài đặt bằng cách nhập lệnh sau: `git --version`.

## II. Local Repository
Sau khi bạn đã cài đặt Git thành công, bạn cần đăng nhập vào Github, sau đó ấn vào dấu + trên menu và chọn **New repository**.

Bạn sẽ cần đặt tên cho kho chứa của bạn, sau đó lựa chọn loại kho chứa phù hợp – Public (ai cũng có thể clone) và Private (chỉ có những người được cấp quyền mới có thể clone).

Sau khi bạn đã chọn xong những tuỳ chọn của repo mới, hãy ấn **Create Repository** để tạo. 

Khi tạo xong nó sẽ dẫn bạn tới trang hướng dẫn làm việc với kho chứa vừa tạo. Và kho chứa của bạn bây giờ sẽ có địa chỉ là https://github.com/$user-name/$repository.

## III. Clone repo về máy
Tiếp theo, việc của bạn bây giờ là hãy clone repo mới này về máy của mình bằng lệnh `git clone địa_chỉ`.

Ví dụ ở trên, chúng ta sẽ clone repo về máy bằng lệnh:

`$ git clone https://github.com/ltnquang/ute.git`

## IV. Push code lên git
Thêm/sửa/xóa các file/thư mục trên repo vừa clone về, sau đó lần lượt chạy từng lệnh sau:

`$ git add`

`$ git commit -m "điền nội dung commit vào đây"`

`$ git push origin master`

Chú ý: Trỏ đúng thư mục mà chúng ta clone git về, ví dụ `cd 'tên thư mục'` để chuyển đến.

Vậy là bạn hoàn thành việc ***push code lên git*** rồi đó. Hãy vào lại GitHub repo để kiểm tra nhé!

