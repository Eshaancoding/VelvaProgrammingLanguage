; ModuleID = 'mod'
source_filename = "mod"

%Array = type { i32*, i32 }

declare float @cos(float)

declare float @sin(float)

declare float @cos_0(i32)

declare float @sin_0(i32)

declare i32 @putchar(i32)

declare i32 @printf(i8*)

declare i32* @malloc(i32)

declare void @free(i8*)

declare i8* @memcpy(i8*, i8*, i32)

define void @main() {
main:
  %arr = alloca %Array, align 8
  call void @constructor_Array(i32 5, %Array* %arr)
  call void @Array_set(i32 0, i32 3, %Array* %arr)
  call void @Array_print(%Array* %arr)
  ret void
}

; Function Attrs: nounwind
define void @constructor_Array(i32 %length, %Array* %this) #0 {
constructor_Array:
  %length1 = alloca i32, align 4
  store i32 %length, i32* %length1, align 4
  %Array_x = getelementptr %Array, %Array* %this, i32 0, i32 0
  %Array_len = getelementptr %Array, %Array* %this, i32 0, i32 1
  %length2 = load i32, i32* %length1, align 4
  store i32 %length2, i32* %Array_len, align 4
  %length3 = load i32, i32* %length1, align 4
  %0 = call i32* @malloc(i32 %length3)
  store i32* %0, i32** %Array_x, align 8
  ret void
}

; Function Attrs: nounwind
define void @Array_set(i32 %index, i32 %value, %Array* %this) #0 {
Array_set:
  %index1 = alloca i32, align 4
  store i32 %index, i32* %index1, align 4
  %value2 = alloca i32, align 4
  store i32 %value, i32* %value2, align 4
  %Array_x = getelementptr %Array, %Array* %this, i32 0, i32 0
  %Array_len = getelementptr %Array, %Array* %this, i32 0, i32 1
  %value3 = load i32, i32* %value2, align 4
  %0 = load i32*, i32** %Array_x, align 8
  %index4 = load i32, i32* %index1, align 4
  %1 = getelementptr i32, i32* %0, i32 %index4
  store i32 %value3, i32* %1, align 4
  ret void
}

; Function Attrs: nounwind
define void @Array_print(%Array* %this) #0 {
Array_print:
  %Array_x = getelementptr %Array, %Array* %this, i32 0, i32 0
  %Array_len = getelementptr %Array, %Array* %this, i32 0, i32 1
  %i = alloca i32, align 4
  store i32 0, i32* %i, align 4
  br label %for_cond_0

for_cond_0:                                       ; preds = %for_0, %Array_print
  %i1 = load i32, i32* %i, align 4
  %len = load i32, i32* %Array_len, align 4
  %0 = icmp slt i32 %i1, %len
  br i1 %0, label %for_0, label %for_end_0

for_0:                                            ; preds = %for_cond_0
  %x = load i32*, i32** %Array_x, align 8
  %i2 = load i32, i32* %i, align 4
  %1 = getelementptr i32, i32* %x, i32 %i2
  %2 = load i32, i32* %1, align 4
  %3 = add i32 %2, 48
  %4 = call i32 @putchar(i32 %3)
  %i3 = load i32, i32* %i, align 4
  %5 = add i32 %i3, 1
  store i32 %5, i32* %i, align 4
  br label %for_cond_0

for_end_0:                                        ; preds = %for_cond_0
  ret void
}

attributes #0 = { nounwind }
