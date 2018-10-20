
<div align="center">

<img width="220px" src="https://github.com/Lvsi-China/Sherk/raw/master/extra/image/logo/sherk.jpeg">

<br/>

<img width="90px" src="https://github.com/Lvsi-China/Sherk/raw/master/extra/image/logo/1.jpg">

</div>

<br/>

<div align="center">
<img height="40px" src="https://github.com/Lvsi-China/Sherk/raw/master/extra/image/logo/2.jpg">
<p><font size=2>A Relational Database System Implementation Based on C Language</font></p>
</div>

<br>

### ==更新中( updating ) ...==

<br>

#### 介绍
第 1-5 章 是理论讲解，第 6 章才开始代码的实现，你可以选择 [直接看代码](#article-chapter-6)
<br>

<br>

> ### 1. 前言
> - [1.1 图解数据库](#article-1.1)
>
> - [1.2 数据库的发展历史](#article-1.2)
>
> - 1.3 数据库的4个基本概念
>
>     - [1.3.1 数据](#article-1.3.1)
>     - [1.3.2 数据库](#article-1.3.2)
>     - [1.3.3 数据库管理系统](#article-1.3.3)
>     - [1.3.4 数据库系统](#article-1.3.4)
>
> ### 2. 深入理解数据库系统
>
> - 2.1 数据模型的概念
>
>     - [2.1.1 什么是数据模型](#article-2.1.1)
>
>     - 2.1.2 数据模型的组成 3 要素
>
>         - [数据结构]()
>         - [数据操作]()
>         - [数据的完整性约束条件]()
>
>     - 2.1.3 两类数据模型
>
>         - [概念数据模型](#article-2.1.2)
>         - [物理数据模型](#article-2.1.3)
>
>     - 2.1.4 概念数据模型
>
>         - [实体]()
>         - [属性]()
>         - [码]()
>         - [实体型]()
>         - [实体集]()
>         - [联系]()
>
>    - 2.1.5 三种重要的物理数据模型
>
>         - [层次模型]()
>         - [网状模型]()
>         - [关系模型]()
>
> - 2.2 基于不同物理数据模型的3种数据库系统
>     - [2.2.2 层次数据库系统 - 基于层次模型](#article-2.2.2)
>     - [2.2.3 网状数据库系统 - 基于网状模型](#article-chapter-3)
>     - [2.2.3 关系数据库系统 - 基于关系模型](#article-chapter-4)
>
> - 2.3 数据库系统的三级模式概述及结构
>     - [2.3.1 概述](#article-2.3.1)
>     - [2.3.2 外模式](#article-2.3.2)
>     - [2.3.3 模式](#article-2.3.3)
>     - [2.3.4 内模式](#article-2.3.4)
>
> - 2.4 数据库系统的特点
>
> - 2.5 常用的数据库系统分类
>     - [2.4.1 关系型数据库]()
>     - [2.4.1 非关系型数据库（NoSQL）]()
>
>
> ### 3. <span id="article-chapter-3">非关系型数据库系统简介</span>
>
> - [3.1 概述](#article-3.1)
> - [3.2 非关系型数据库的特点](#article-3.2)
> - [3.3 常用的非关系型数据库](#article-3.3)
>
> ### 4. <span id="article-chapter-4">深入理解关系型数据库系统</span>
>
> - 4.1 关系的基础概念
>
>     - [4.1.1 定义](#)
>
>     - [4.1.2 如何理解关系](#)
>
>     - 4.1.3 重要的 3 个组成
>
>         - [关系数据结构]()
>         - [关系操作集合]()
>         - [关系完整性约束]()
>
>     - [4.1.3 关系模式的数据理论](#)
>
>         - [什么是关系模式](#)
>
>         - 好的关系模式应具有的特点
>
>             - [数据冗余少]()
>             - [插入正常]()
>             - [更新正常]()
>             - [删除正常]()
>
>         - 规范化（关系模式的模式分解）
>             - [函数依赖](#)
>             - [码](#)
>             - [范式](#)
>             - [2NF](#)
>             - [3NF](#)
>             - [BCNF](#)
>             - [多值依赖](#)
>             - [4NF](#)
>
> - 4.2 关系的完整性
>     - [4.2.1 概述](#article-4.2.1)
>     - [4.2.2 实体完整性](#article-4.2.2)
>     - [4.2.3 参照完整性](#article-4.2.3)
>     - [4.2.4 自定义完整性](#article-4.2.4)
>
> - 4.3 关系的代数运算
>     - [4.3.1 集合运算](#)
>
>     - 4.3.2 关系运算
>         - [选择](#)
>         - [投影](#)
>         - [连接](#)
>         - [除](#)
>
>
>
> ### 5. 关系型数据库系统的理论架构
>
> - #### 5.1 完整性
>
>     - [5.1.1 概述](#)
>     - [5.1.2 实体完整性](#)
>     - [5.1.3 参照完整性](#)
>     - [5.1.4 自定义完整性](#)
>     - [5.1.5 断言（Assertion）](#)
>
> - #### 5.2 数据存储
>
>     - [5.2.1 概述](#)
>     - [5.2.2 磁盘存储](#)
>     - 5.2.3 内存缓存
>
>         - [缓存池](#)
>
> - #### 5.3 数据索引
>
>     - [5.3.1 概述](#)
>     - [5.3.2 索引的分类](#)
>
>     - 5.3.3 索引的实现原理
>
>         - [B 树索引](#)
>         - [B+ 树索引](#)
>         - [Hash 索引](#)
>
> - #### 5.4 查询处理
>
>     - [5.4.1 概述](#)
>
>     - 5.4.2 查询步骤
>
>         - [查询分析](#)
>         - [查询检查](#)
>         - [查询优化](#)
>         - [查询执行](#)
>
>     - [5.4.3 理解查询计划](#)
>
>     - 5.4.4 理解查询优化
>
>         - [查询优化概述](#)
>         - [实例讲解](#)
>         - [优化方法](#)
>
> - #### 5.5 日志系统
>
> - #### 5.6 事务处理
>
>     - ##### 5.6.1 事务
>
>         - [概述](#)
>         - [图解事务](#)
>         - 事务的 ACID 特性
>
>             - [原子性 ( Atomicity )](#)
>             - [一致性 ( Consistency )](#)
>             - [隔离性 ( Isolation )](#)
>             - [持久性 ( Durability )](#)
>
>         - [实例讲解](#)
>
>     - ##### 5.6.2 并发控制
>
>         - [概述](#)
>         - [封锁及其协议](#)
>         - [封锁的粒度](#)
>         - [活锁和死锁](#)
>         - [多版本并发控制](#)
>
>     - ##### 5.6.3 恢复技术
>
>         - [概述](#)
>         - [数据转储](#)
>         - [登记日志文件](#)
>         - [检查点恢复技术](#)
>
> - #### 5.7 安全性
>
>     - [5.7.1 概述](#)
>     - [5.7.2 视图](#)
>     - [5.7.3 审计](#)
>     - 5.7.4 安全控制
>
>         - [用户身份鉴别]()
>         - [存取控制]()
>         - [授权：授予（GRANT）与收回（REVOKE）]()
>
>     - [5.7.5 数据加密](#)
>         - [存储加密]()
>         - [传输加密]()
>
> ### 6. <span id="article-chapter-6">关系型数据库系统的代码实现</span>
>
> - #### 6.1 介绍
>
>     - [6.1.1 目录结构](#)
>
> - #### 6.2 客户端
>
> - #### 6.3 服务端
>
>
>
> ### 7. 完结
> - [7.1 总结](#)
> - [7.2 思考](#)
> - 7.3 附录
>     - 7.3.1 [参考资料及文献](#article-7.3.1)

<br/>

## 1. 前言

- ### <span id="article-1.1">1.1 图解数据库</span>

- ### <span id="article-1.2">1.2 数据库的发展历史</span>

- ### 1.3 数据库的4个基本概念

    - #### <span id="article-1.3.1">1.3.1 数据</span><br/>
        数据是数据库中存储的基本对象。

    - #### <span id="article-1.3.2">1.3.2 数据库</span><br/>
        数据库即是存放数据的仓库。

    - #### <span id="article-1.3.3">1.3.3 数据库管理系统</span><br/>
        数据库管理系统是位于用户与操作系统之间的一层数据管理软件

    - #### <span id="article-1.3.4">1.3.4 数据库系统</span><br/>
        数据库系统是由数据库、数据库管理系统、应用程序和数据库管理员组成的存储、管理、处理和维护数据的系统。



## 2. 数据库系统的理解

- ### 2.1 数据模型的概述及分类

    - #### <span id="article-2.1.1">2.1.1 概述</span>
        现有的数据库系统均基于某种数据模型的，数据模型是数据库系统的核心和基础。数据模型是一种模型，是对现实世界数据特征的抽象。也就是说数据模型是用来描述数据，组织数据和对数据进行操作的。<br/>
        在数据模型中有 型（type） 和 值（value）的概念。

    - #### <span id="article-2.1.1">2.1.1 概念模型</span>

    - #### <span id="article-2.1.2">2.1.2 物理模型</span>


- ### 2.2 数据库系统的概述及分类

    - #### <span id="article-2.2.1">2.2.1 概述</span><br/>
        数据库系统主要分为：层次数据库系统（层次模型），网状数据库系统（网状模型），关系型数据库（关系模型）。

    - #### <span id="article-2.2.2">2.2.2 关系型数据库</span>

    - #### <span id="article-2.2.3">2.2.3 非关系型数据库</span>


- ### 2.3 数据库系统的三级模式结构

    - #### <span id="article-2.3.1">2.3.1 概述</span><br/>
        数据库系统的三级模式结构是指数据库系统是由外模式、模式、内模式三级构成的。

    - #### <span id="article-2.3.2">2.3.2 外模式</span><br/>
        外模式也称为子模式（subschema）或用户模式、它是数据库用户能够看见和使用的局部数据的逻辑结构域和特征的描述，是数据库用户的数据视图，是与某一应用有关的数据的逻辑表示

    - #### <span id="article-2.3.3">2.3.3 模式</span><br/>
        模式也称为逻辑模式，是数据库中全体数据的逻辑结构和特征的描述，是所有用户的公共数据视图。

    - #### <span id="article-2.3.4">2.3.4 内模式</span><br/>
        内模式也称为存储模式（storage schema），一个数据库只有一个内模式。它是数据物理结构和存储方式的描述，是数据在数据库内部的组织方式。

- ### 2.4 数据库系统的特点


## 3. 非关系型数据库系统（NoSQL）

- ### 3.1 概述

    NoSQL，泛指非关系型的数据库。随着互联网web2.0网站的兴起，传统的关系数据库在应付web2.0网站，特别是超大规模和高并发的SNS类型的web2.0纯动态网站已经显得力不从心，暴露了很多难以克服的问题，而非关系型的数据库则由于其本身的特点得到了非常迅速的发展。NoSQL数据库的产生就是为了解决大规模数据集合多重数据种类带来的挑战，尤其是大数据应用难题。

- ### 3.2 非关系型数据库的特点

    1.&nbsp;不需要预定义模式<br/>
    2.&nbsp;无共享架构<br/>
    3.&nbsp;弹性可扩展<br/>
    4.&nbsp;分区<br/>
    5.&nbsp;异步复制<br/>

- ### 3.3 常用的非关系型数据库


## 4. 深入理解关系型数据库系统

- ### 4.1 基础概念

    - #### 4.1.1 定义

        关系型数据库系统的定义如此。

    - #### 4.1.2 如何理解关系
        关系：现实世界的实体以及实体间的各种联系均用单一的结构类型，即关系来表示。

    - #### 4.1.3 关系模型的三个组成

        - ##### 关系数据结构
            关系模型的数据结构非常简单

        - ##### 关系操作集合
            查询（query）、插入（insert）、删除（delete）、修改（update）

        - ##### 关系完整性约束
            实体完整性、参照完整性、自定义完整性

    - #### 4.1.4 关系模式的数据理论

        - ##### 什么是关系模式
            在数据库中要区分型和值。在关系数库中，关系模式是型，关系是值。关系模式是对关系的描述 。

        - ##### 好的关系模式应具有的特点
            - 数据冗余少
            - 插入正常
            - 更新正常
            - 删除正常

        - ##### 规范化（关系模式的模式分解）
            - 函数依赖
            - 码
            - 范式
            - 2NF
            - 3NF
            - BCNF
            - 多值依赖
            - 4NF

- ### 4.2 关系的完整性

    - #### 4.2.1 概述
    - #### 4.2.2 实体完整性
    - #### 4.2.3 参照完整性
    - #### 4.2.4 自定义完整性

- ### 4.3 关系的代数运算

    - #### 4.3.1 集合运算

        并运算（∪）、差运算（－）、交运算（∩）、笛卡尔积（×）

    - #### 4.3.1 关系运算

        - ##### 选择
        - ##### 投影
        - ##### 连接
        - ##### 除

## 5. 关系型数据库系统的理论架构

- #### 5.1 完整性
-
    - ##### 5.1.1 概述
    - ##### 5.1.2 实体完整性
    - ##### 5.1.3 参照完整性
    - ##### 5.1.4 自定义完整性
    - ##### 5.1.5 断言（Assertion）

- #### 5.2 数据存储

    - ##### 5.2.1 概述

    - ##### 5.2.2 磁盘存储

        - ###### 内存缓存
        - ###### 缓存池

- #### 5.3 数据索引

    - ##### 5.3.1 概述
    - ##### 5.3.2 索引的分类

    - ##### - 5.3.3 索引的实现原理
        - ###### B 树索引
        - ###### B+ 树索引
        - ###### Hash 索引

- #### 5.4 查询处理

    - ##### 5.4.1 概述

    - ##### 5.4.2 查询步骤
        - ###### 查询分析
        - ###### 查询检查
        - ###### 查询优化
        - ###### 查询执行

    - ##### 5.4.3 理解查询计划

    - ##### 5.4.4 理解查询优化
        - ###### 查询优化概述
        - ###### 实例讲解
        - ###### 优化方法

- #### 5.5 日志系统

- #### 5.6 事务处理

    - ##### 5.6.1 事务

        - ##### 概述
            - ###### 图解事务

            - ###### 事务的 ACID 特性
                - ###### 原子性 ( Atomicity )
                - ###### 一致性 ( Consistency )
                - ###### 隔离性 ( Isolation )
                - ###### 持久性 ( Durability )

            - 实例讲解

    - ##### 5.6.2 并发控制

        - ##### 概述
        - ##### 封锁及其协议
        - ##### 封锁的粒度
        - ##### 活锁和死锁
        - ##### 多版本并发控制

    - ##### 5.6.3 恢复技术

        - ###### 概述
        - ###### 数据转储
        - ###### 登记日志文件
        - ###### 检查点恢复技术

- #### 5.7 安全性

    - ##### 5.7.1 概述
    - ##### 5.7.2 视图
    - ##### 5.7.3 审计

    - ##### 5.7.4 安全控制
        - ###### 用户身份鉴别]
        - ###### 存取控制]
        - ###### 授权：授予（GRANT）与收回（REVOKE）

    - ##### 5.7.5 数据加密
        - ###### 存储加密
        - ###### 传输加密


## 6. 关系型数据库系统的代码实现


## 7. 完结

- ### 7.1 总结
    在信息化社会，充分有效地管理和利用各类信息资源，是进行科学研究和决策管理的前提条件。数据库技术是管理信息系统、办公自动化系统、决策支持系统等各类信息系统的核心部分，是进行科学研究和决策管理的重要技术手段。

- ### 7.2 思考
    随着信息管理内容的不断扩展，出现了丰富多样的数据模型（层次模型，网状模型，关系模型，面向对象模型，半结构化模型等），新技术也层出不穷（数据流，Web数据管理，数据挖掘等）。每隔几年，国际上一些资深的数据库专家就会聚集一堂，探讨数据库研究现状，存在的问题和未来需要关注的新技术焦点。

- ### 7.3 附录

    - #### 7.3.1 <span id="article-7.3.1">参考资料及文献</span>
    > 1.《数据库系统概论》 王珊 <br/>
    > 2.[如何自己实现一个关系型数据库？](https://www.zhihu.com/question/38870156)



