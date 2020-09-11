#!/bin/Rscript

for(i in grep(".*.Rmd", dir(), value = TRUE))
{
  rmarkdown::render(i)
}
