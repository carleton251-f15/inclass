(define addme
  (lambda (a b)
    (list (+ a b) 2 9)))

(define add-two-nums
  (lambda (x y)
    (+ x y)))

(define list-length
  (lambda (lst)
    (if (null? lst)
        0
        (+ 1 (list-length (cdr lst))))))

;; Test to see if a list is a list of numbers
(define list-of-numbers?
  (lambda (lst)
    (if (null? lst)
        #t
        (and (number? (car lst))
             (list-of-numbers? (cdr lst))))))



        


















  