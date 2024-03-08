# 1. Linx 系统与 Shell

1. Linux 命令：

- pwd：打印当前目录的绝对路径
- ls： 列出 当前目录下所有文件和目录
- <img src="C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307201910948.png" alt="image-20240307201910948" style="zoom: 80%;" />
- mkdir：创建目录 （mkd -p dir1/dir2）
- rmdir：删除目录（只能删除空目录）
- touch：创建文件（若已存在该文件则修改文件修改时间）
- cp&mv：复制与移动文件
- ![image-20240307202936975](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307202936975.png)
- rm：删除文件或目录
- ![image-20240307203847942](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307203847942.png)
-  cat：连接并显示文件内容
- ![image-20240307204134124](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307204134124.png)
- grep：过滤文件内容
- ![image-20240307204300807](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307204300807.png)
- ![image-20240307204354090](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307204354090.png)
- ![image-20240307204535005](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307204535005.png)

- 编辑文件

  ![image-20240307204748473](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307204748473.png)

2. Linux 用户管理

   - 新建用户：useradd
   - 切换用户：su
   - 修改密码：passwd
   - 修改用户属性：usermod
   - 查看用户：cat /etc/passwd
   - ![image-20240307211003308](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307211003308.png)
   - 删除用户：userdel
   - 用户组;
   - ![image-20240307211517706](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240307211517706.png)

   3. Linux系统与磁盘管理

      ![image-20240308221213945](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240308221213945.png)

      



# 2. Git

Git：分布式快照流文件管理系统

一个文件会处于三种状态：已提交、已修改、已暂存→Git项目的三个阶段：工作区、暂存区、Git目录

先add（暂存）再commit（提交）



# 3.C#

 枚举类型、元组类型

装箱与拆箱机制

Object类中的方法：ToString、GetHashCode、GetType

![image-20240308201338972](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240308201338972.png)

var关键字可以让编译器自动推导变量类型

- 输出：
- ![image-20240308205841956](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240308205841956.png)
- 输入：~
- foreach:   
- ![image-20240308210251760](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240308210251760.png)
- 可以使用“？”定义一个可为null的类型
- “？”常用于判断一个引用是否为null，不为null则进行后续操作
- "??"合并运算符：如果左边表达式不为null，则值为左边的值，若为null则值为右边的值
- “??=”：合并赋值运算符，若左边值为null，则给他赋右边的值
- 二维数组为int[ , ]; GetLength(n)获取数组第n维长度
- **交错数组**
- ![image-20240308211337337](C:\Users\AW\AppData\Roaming\Typora\typora-user-images\image-20240308211337337.png)
- internal访问修饰符：本文件内访问
- 静态字段用static修饰，常量用const修饰
- readonly修饰符：该变量仅能在构造方法中定义
- 可以在方法定义中加上ref关键字是的参数按照引用方式传递
- 一些运算符可以重载为静态方法
- **属性**
  - 一个属性至多包括两个访问器：get(用于外部读取字段的值、set（用于外部设置字段的值）/init（只允许在对象构造期间设置属性的值）
- partial类
- 继承 
- 使用 is 和 is not 检查对象类型
- 结构类型是值类型
- 重写虚方法或抽象方法时，须在前面加上override关键字，否则只会隐藏基类方法
- 委托：关键字：delegate  相当于方法的引用
  - 内置委托
  - 多播委托

- 事件