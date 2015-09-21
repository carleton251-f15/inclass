(define my-remove-first
  (lambda (item lst)
    (cond [(null? lst) '()]
          [(equal? item (car lst))  (cdr lst)]
          [else (cons (car lst) (my-remove-first item (cdr lst)))])))

(my-remove-first 2 '(1 3 9 2 8 2 6 12))

(define my-remove-all
  (lambda (item lst)
    (cond [(null? lst) '()]
          [(equal? item (car lst))  (my-remove-all item (cdr lst))]
          [else (cons (car lst) (my-remove-all item (cdr lst)))])))

(my-remove-all 2 '(1 3 9 2 8 2 6 12))



(define subst
  (lambda (old new lst)
    (cond [(null? lst) '()]
          [(list? lst)
           (cons (subst old new (car lst)) (subst old new (cdr lst)))]
          [(equal? lst old) new]
          [else lst])))

(subst 'b 'a '((b c) (b () d)))















           