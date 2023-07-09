; ModuleID = 'mod'
source_filename = "mod"

declare float @cos(float)

declare float @sin(float)

declare float @cos_0(i32)

declare float @sin_0(i32)

declare i32 @putchar(i32)

declare i32 @printf(ptr)

define void @main() {
main:
  %i = alloca i32, align 4
  store i32 0, ptr %i, align 4
  br label %for_cond_0

for_cond_0:                                       ; preds = %for_0, %main
  %i1 = load i32, ptr %i, align 4
  %0 = icmp slt i32 %i1, 26
  br i1 %0, label %for_0, label %for_end_0

for_0:                                            ; preds = %for_cond_0
  %i2 = load i32, ptr %i, align 4
  %1 = add i32 65, %i2
  %2 = call i32 @putchar(i32 %1)
  %i3 = load i32, ptr %i, align 4
  %3 = add i32 %i3, 1
  store i32 %3, ptr %i, align 4
  br label %for_cond_0

for_end_0:                                        ; preds = %for_cond_0
  %4 = call i32 @putchar(i32 10)
  %i4 = alloca i32, align 4
  store i32 0, ptr %i4, align 4
  br label %for_cond_1

for_cond_1:                                       ; preds = %for_1, %for_end_0
  %i5 = load i32, ptr %i4, align 4
  %5 = icmp slt i32 %i5, 26
  br i1 %5, label %for_1, label %for_end_1

for_1:                                            ; preds = %for_cond_1
  %i6 = load i32, ptr %i4, align 4
  %6 = add i32 97, %i6
  %7 = call i32 @putchar(i32 %6)
  %i7 = load i32, ptr %i4, align 4
  %8 = add i32 %i7, 1
  store i32 %8, ptr %i4, align 4
  br label %for_cond_1

for_end_1:                                        ; preds = %for_cond_1
  ret void
}
