; non-curried
(define plain-mult
  (lambda (a b)
    (* a b)))

(plain-mult 3 5)

   
; Curried version of multiplication
(define curried-mult
  (lambda (a)
    (lambda (b)
      (* a b))))

((curried-mult 3) 5)
(define f (curried-mult 3))
(f 5)
(f 7)
(f 9)


; map, fold, etc
(define addOne
  (lambda (x)
    (+ x 1)))

; map takes a function and a list
(map addOne '(9 3 4 7 12))

; foldl and foldr for "folding up a list"
; 3 parameters: a function (of 2 parameters),
; a starting value, and a list
(foldl cons '() '(1 2 3 4))
(foldl + 0 '(1 2 3 4))

(foldr cons '() '(1 2 3 4))
(foldr + 0 '(1 2 3 4))

(define my-map
  (lambda (f lst)
    (if (null? lst) '()
       (cons (f (car lst)) (my-map f (cdr lst))))))

(my-map addOne '(9 3 4 7 12))

(define my-foldr
  (lambda (f init lst)
    (if (null? lst)  init
        (f (car lst) (my-foldr f init (cdr lst))))))

(my-foldr cons '() '(1 2 3 4))
(my-foldr + 0 '(1 2 3 4))

(define my-foldl
  (lambda (f init lst)
    (if (null? lst)  init
        (my-foldl f (f (car lst) init) (cdr lst)))))

(my-foldl cons '() '(1 2 3 4))
(my-foldl + 0 '(1 2 3 4))



































