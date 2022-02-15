# PRF192
It's just something about programming with C language
From IA1703

## About me 😋
Mình là một thằng gà mờ bắt đầu học code, tìm kiếm mày mò các kiểu các kiểu trên mạng với ước mơ trở thành Mr.Robot.
Và đây là repository mình tạo ra với mục đích ghi lại những gì mình đã học tại lớp PRF192 và chia sẻ đến các bạn cùng khóa cũng như khóa sau

## Một số bài C mà mình làm và up lên
- [Basic](https://github.com/TwentySick/PRF192/blob/78df4e5a6de71f78fab33b122def1fae053615e9/BasicC.c)
- [Drawing Pattern](https://github.com/TwentySick/PRF192/blob/78df4e5a6de71f78fab33b122def1fae053615e9/Drawing%20Pattern/DrawingPattern.c)
- [Special Numbers](https://github.com/TwentySick/PRF192/blob/aec2f4a72d69011b14842f7746e4096ca93b7e94/SpecialNumber.c)

## Một số kiến thức mở rộng về ngôn ngữ lập trình C cơ bản
Nguồn: [Lập Trình Căn Bản](https://laptrinhcanban.com/c/lap-trinh-c-co-ban/nhap-xuat-trong-c/ham-printf-va-cach-xuat-du-lieu-trong-c/)
### Bảng Định Dạng Xuất Trong C 

Dưới đây là bảng các định dạng xuất thông dụng được sử  dụng trong hàm xuất xữ liệu trong C \
Như: **printf(), fprintf(), sprintf()**.

Chuỗi định dạng | Đại diện cho kiểu ký tự | Ý nghĩa |
--- | --- | --- |
%c | char | Xuất ra một ký tự |
%s | char * | Xuất ra một chuỗi ký tự
%d | int, short | Xuất ra một số nguyễn dưới dạng thập phân
%u | unsigned int, unsigned short | Xuất ra một số nguyên dưới dạng thập phân không dấu
%x | int, short, unsigned int, unsigned short | Xuất ra một số nguyên dưới dạng thập lục phân
%o | int, short, unsigned int, unsigned short | Xuất ra một số nguyên dưới dạng bát phân
%f | float | Xuất ra một số thực
%e | float | Xuất ra một số thực dưới dạng số mũ
%g | float | Xuất ra một số thực dưới dạng phù hợp nhất
%ld | long | Xuất ra một số nguyên dưới dạng chính xác kép ở dạng thập phân
%lu | unsigned long | Xuất ra một số nguyên chính xác kép ở dạng thập phân không dấu |
%lo | long, unsigned long | Xuất ra một số nguyên chính xác kép trong hệ bát phân
%lx | long, unsigned long | Xuất ra một số nguyên chính xác kép ở hệ thập lục phân
%lf | double, unsigned long | Xuất ra số thực chính xác gấp đôi
%a | double | Xuất ra một số thực chính xác kép thập lục phân

### Ký tự đặc biệt
Ký tự đặc biệt | Ý nghĩa
--- | ---
\n | Xuống dòng
\t | Dấu tab
\0 | Kết thúc chuỗi
%d%% | In ra ký tự phần trăm

### Cách sử dụng nâng cao của printf trong C
 
Cú pháp: *`%[flags][width][.precision][length]specifier`* 

Trong đó:
- `flags`: Chứa các chỉ định có tác dụng căn chỉnh, thêm dấu, đệm số 0,...
- `width`: Độ dài tối thiểu của kết quả xuất
- `.precision`: Độ dài chính xác khi xuất số thực (số chữ số đằng sau dấu phẩy số thực sau khi làm tròn)
- `length`: Chỉ định bởi một trong các kí tự *h*, *l* hoặc *L* nhằm xác định số thuộc dạng short, long hay long double
- `specifier`: là định dạng của chuỗi kết quả

#### flags
flag | Ý nghĩa
--- | ---
\- | Căn trái
\+ | Thêm dấu cho số
0 | Đệm số 0 cho đủ độ dài kết quả xuất
space | Đệm dấu cách cho đủ độ dài kết quả xuất
\# | Chỉ định các xuất dữ liệu khác

#### width
Đây là đối số chỉ định độ dài tối thiểu của chuỗi kết quả xuất ra màn hình. Nếu như độ dài của chuỗi kết quả **nhỏ hơn** giá trị của **width** thì các giá trị chỉ định trong `flags` như **số 0** hay **dấu cách** sẽ được sử dụng để đệm cho đủ độ dài **width**.

#### .precision
Đây là độ chính xác khi xuất ra màn hình các số thực dấu phẩy động như float hay double. Độ chính xác này nói cách khác chính là số chữ số ở phần thập phân của số thực khi xuất.\
Ví dụ:
```C
// code:
printf("X = %0.2f", 12.125);
// output:
X = 12.13
```

#### length
Đây là đối số được chỉ định bởi một trong các ký tự *h*, *l* hoặc *L* nhằm xác định số thuộc dạng short, long hay double

#### specifier
Đây là phần chữ cái trong chuỗi định dạng C

### Bảng Định Dạng Nhập Trong C
Dưới đây là bảng định dạng nhập thông dụng được sử dụng trong các hàm nhập dữ liệu trong C \
Như: **scanf(), fscanf(), sscanf()**.

Chuỗi định dạng | Đại diện cho kiểu ký tự | Ý nghĩa |
--- | --- | --- |
%c | char | Nhập một ký tự
%s | char * | Nhập một chuỗi ký tự
%d | int, short | Nhập một số nguyên dưới dạng thập phân |
%u | unsigned int, unsigned short | Nhập một số nguyên dưới dạng thập phân không dấu
%x | int, short, unsigned int, unsigned short | Nhập một số nguyên dưới dạng thập lục phân 
%o | int, short, unsigned int, unsigned short | Nhập một số nguyên dưới dạng bát phân
%f | float | Nhập một số thực
%e | float | Nhập một số thực dưới dạng số mũ
%g | float | Nhập một số thực dưới dạng phù hợp nhất
%ld | long | Nhập một số nguyên chính xác kép ở dạng thập phân
%lu | unsigned long | Nhập số nguyên chính xác kép ở dạng thập phân không dấu
%lo | long, unsigned long | Nhập số nguyên chính xác kép trong hệ bát phân
%lx | long, unsigned long | Nhập số nguyên chính xác kép trong hệ lục phân
%lf | double, unsigned long | Nhập số thực chính xác gấp đôi
%a | double | Nhập một số thực chính xác kép thập lục phân
