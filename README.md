# PRF192
It's just something about programming with C language
From IA1703

## About me 😋
Mình là một thằng gà mờ bắt đầu học code, tìm kiếm mày mò các kiểu các kiểu trên mạng với ước mơ trở thành Mr.Robot.
Và đây là repository mình tạo ra với mục đích ghi lại những gì mình đã học tại lớp PRF192 và chia sẻ đến các bạn cùng khóa cũng như khóa sau

## Một số bài C mà mình làm và up lên
- [Basic](https://github.com/TwentySick/PRF192/blob/78df4e5a6de71f78fab33b122def1fae053615e9/BasicC.c)
- [Drawing Pattern](https://github.com/TwentySick/PRF192/blob/78df4e5a6de71f78fab33b122def1fae053615e9/Drawing%20Pattern/DrawingPattern.c)

## Một số kiến thức mở rộng về ngôn ngữ lập trình C cơ bản
### Bảng Định Dạng Xuất Trong C 

Dưới đây là bảng các định dạng xuất thông dụng được sử  dụng trong hàm xuất xữ liệu trong C như **printf(), fprintf(), sprintf()**.

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

### Bảng Định Dạng Nhập Trong C
Dưới đây là bảng định dạng nhập thông dụng được sử dụng trong các hàm nhập dữ liệu trong C như **scanf(), fscanf(), sscanf()**.

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
