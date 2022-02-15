# Bảng Định Dạng Xuất Trong C 

Dưới đây là bảng các định dạng xuất thông dụng được sử  dụng trong hàm xuất xữ liệu trong C như printf(), fprintf(), sprintf().

+-----------------+--------------------------+---------------------------------+
| Chuỗi định dạng | Đại diện cho kiểu ký tự  | Ý nghĩa                         |
+-----------------+--------------------------+---------------------------------+
|       %c        | char                     | Xuất ra một ký tự               |
+-----------------+--------------------------+---------------------------------+
|       %s        | char *                   | Xuất ra một chuỗi ký tự         |
+-----------------+--------------------------+---------------------------------+
|       %d        | int, short               | Xuất ra một số nguyên dưới dạng |
|                 |                          | thập phân                       |
+-----------------+--------------------------+---------------------------------+
|       %u        | unsigned int,            | Xuất ra một số nguyên           |
|                 | unsigned short           | dưới dạng thập phân không dấu   |
+-----------------+--------------------------+---------------------------------+
|       %x        | int, short, unsigned int,| Xuất ra một số nguyên dưới dạng |
|                 | unsigned short           | thập lục phân                   |
+-----------------+--------------------------+---------------------------------+
|       %o        | int, short, unsigned int,| Xuất ra một số nguyên dưới dạng |
|                 | unsigned short           | bát phân                        |
+-----------------+--------------------------+---------------------------------+
|       %f        | float                    | Xuất ra một số thực             |
+-----------------+--------------------------+---------------------------------+
|       %e        | float                    | Xuất ra một số thực dưới dạng   |
|                 |                          | số mũ                           |
+-----------------+--------------------------+---------------------------------+

Chuỗi định dạng | Đại diện cho kiểu ký tự | Ý nghĩa |
--- | --- | --- |