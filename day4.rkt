(define cons-each
  (lambda (s lst)
    (if (null? lst) '()
        (cons (cons s (car lst))
              (cons-each s (cdr lst))))))

(define subsets
  (lambda (lst)
    (if (null? lst) '( () )
        (append
         (cons-each (car lst) (subsets (cdr lst)))
         (subsets (cdr lst))))))

;; Examples of let which is useful
(define circleareaspecial
  (lambda (r)
    (let [(pi 3.14) (dave 6)]
      (* pi r r dave))))

;; Another variation
(define subsets2
  (lambda (lst)
    ; helper function
    (letrec [(cons-each2 (lambda (s lst)
                        (if (null? lst) '()
                            (cons (cons s (car lst))
                                  (cons-each2 s (cdr lst))))))]
      ; actual code
      (if (null? lst) '( () )
          (append
           (cons-each2 (car lst) (subsets2 (cdr lst)))
           (subsets2 (cdr lst)))))))



