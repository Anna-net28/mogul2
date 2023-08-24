[1mdiff --git a/css/indent.css b/css/indent.css[m
[1mindex 724dc8c..e105e9d 100644[m
[1m--- a/css/indent.css[m
[1m+++ b/css/indent.css[m
[36m@@ -10,6 +10,6 @@[m

.text-grey {[m
    color: #5E5E5E;[m
    font-weight: [31m700;[m[32m400;[m
    padding: 0 30px 15px 30px;[m
}[m
[1mdiff --git a/index.html b/index.html[m
[1mindex 07c7f0d..80cf265 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -136,7 +136,7 @@[m
                    <p class="indent__text text">Отступ делают за счёт соседних элементов, а не дочерних:</p>[m
                    <figure class="indent__image">[m
                        <img class="indent__img-border" src="img/bigsmall.png">[m
                        <figcaption class="indent__text text [31mtext-grey">ВАЖНО:[m[32mtext-grey"><b>ВАЖНО:</b>[m здесь .<i>list-item</i> — последний
                            возможный элемент в котором мы[m
                            задаём отступ, чтобы[m
                            разделить списки.</figcaption>[m
[1mdiff --git a/readme.md b/readme.md[m
[1mindex 546368a..b498937 100644[m
[1m--- a/readme.md[m
[1m+++ b/readme.md[m
[36m@@ -13,4 +13,9 @@[m [mgit diff --color-words[m
git add .[m
git commit -m "отредактированы блоки в html header, footer, а также css файлы normalize, header, footer"[m
git diff --color-words[m
[32mgit push[m
[32mgit diff --color-words[m
[32mgit add .[m
[32mgit commit -m "отредактированы css файл indent"[m
[32mgit diff --color-words[m
git push[m
