# PRF192
It's just something about programming with C language
From IA1703

## Bảng Định Dạng Xuất Trong C 

Dưới đây là bảng các định dạng xuất thông dụng được sử  dụng trong hàm xuất xữ liệu trong C như printf(), fprintf(), sprintf().

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

