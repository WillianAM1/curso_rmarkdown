#!/bin/Rscript

for(i in grep(".*.Rmd", dir(), value = TRUE))
{
  rmarkdown::render(i)
}

for(i in grep("(.*.tex)|(.*.log)", dir(), value = TRUE))
{
  file.remove(i)
}
