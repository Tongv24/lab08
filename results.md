# 第 8 周 git 实验 · 结果填写单

姓名：___童威______　学号：__202480501125____　仓库链接：__https://github.com/Tongv24/lab08_____

## 任务① 首次提交

| 项 | 结果 |
|----|------|
| `git log --oneline` 输出（抄 1 行） | |  7b5b1cd feat: calc 工程初始版本
| 提交信息 | ______________ |   feat: calc 工程初始版本

## 任务② 三区流动

| 阶段 | status 颜色/字样 |
|------|------------------|
| 改 calc.c 后（未 add） | _红色 `modified`_____ |
| add 后（待提交） | __绿色 `modified`（Changes to be committed）____ |
| `git diff` 能看到 ± 行吗 | □ 能 | 能

截图：□ 两次 status 对比

## 任务③ 后悔药三连

| 药 | 命令 | 结果 |
|----|------|------|
| restore 丢弃 | `git restore calc.c` | diff 无输出 □ |  diff 无输出
| --amend 改信息 | `git log --oneline` 新信息 | ______________ | refactor: calc 增加注释（修订版）
| revert 撤销 | 新增的提交叫 | Revert "______" |  Revert "refactor: calc 增加注释（修订版）"

## 任务④ .gitignore

| 项 | 结果 |
|----|------|
| .gitignore 三行内容 | |  `*.o``app`（有效规则共两行，与实验要求一致）
| `git rm --cached app` 后本地 app 还在吗 | □ 在 |  在
| 再 make 后 status 里出现 *.o 吗 | □ 不出现 |   不出现

## 任务⑤ 远程仓库

| 项 | 结果 |
|----|------|
| 平台 | Gitee □ / GitHub □ |   GitHub 
| `ssh -T` 测试输出（抄半行） | |  Hi Tongv24! You've successfully authenticated
| clone 目录里 `git log` 有历史吗 | □ 有 |  有

仓库链接：____https://github.com/Tongv24/lab08____________

## 任务⑥ ⭐ 分支实战

| 项 | 结果 |
|----|------|
| 分支名 | ______________ |  feat-mod
| 合并后 ./app 输出行数 | ______（应 5 行） |  5
| 提交信息前缀 | ______________ |  feat:

## 任务⑦ ⭐ 冲突实战

| 项 | 结果 |
|----|------|
| push 被拒的提示（抄关键词） | |  rejected (fetch first)
| 冲突标记三行（默写结构） | `<<<<<<<` / `=======` / `>>>>>>>` □ |  `<<<<<<< HEAD` / `=======` / `>>>>>>> 提交哈希`
| 解决后 push 成功 | □ |  是

截图：□ rejected □ CONFLICT □ 冲突标记

## 自查（课后）

- [ ] 三区画得出　- [ ] 三板斧默写　- [ ] 后悔药三连用过　- [ ] .gitignore 写过　- [ ] push/pull/clone 走通　- [ ] 解过冲突　- [ ] 提交信息带前缀
