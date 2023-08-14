; ModuleID = 'mod'
source_filename = "mod"

declare float @cos(float)

declare float @sin(float)

declare float @cos_0(i32)

declare float @sin_0(i32)

declare i32 @putchar(i32)

declare i32 @printf(i8*, ...)

declare i32* @malloc(i32)

declare void @free(i8*)

declare i8* @memcpy(i8*, i8*, i32)

define void @main() {
main:
  %x = alloca i32, align 4
  store i32 3, i32* %x, align 4
  %x1 = load i32, i32* %x, align 4
  %0 = add i32 %x1, 48
  %1 = call i32 @putchar(i32 %0)
  %y = alloca i32, align 4
  store i32 0, i32* %y, align 4
  store i32 6, i32* %y, align 4
  %y2 = load i32, i32* %y, align 4
  %2 = add i32 %y2, 48
  %3 = call i32 @putchar(i32 %2)
  %b = alloca i32, align 4
  store i32 3, i32* %b, align 4
  %b3 = load i32, i32* %b, align 4
  %4 = add i32 %b3, 48
  %5 = call i32 @putchar(i32 %4)
  ret void
}
