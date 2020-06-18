for(i in dir()[stringr::str_detect(dir(), ".Rmd$")])
{
  rmarkdown::render(i, output_dir = "../../docs/exemplos")
}
