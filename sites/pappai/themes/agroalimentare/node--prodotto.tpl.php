<?php
if ($teaser) {
    ?>
    <div class="grid">
        <figure class="effect-zoe">
            <?php print render($content['field_immagine_anteprima']); ?>

            <?php if ($content['field_allergene']) { ?>
            <figcaption ><ul>

                    <?php
                    $field_to_print = render($content['field_allergene']);
                    $field_to_print = str_replace('Tracce', '<div class="indicatore yellow">&nbsp;</div>',$field_to_print);
                    $field_to_print = str_replace('<span class="hierarchical-select-item-separator">›</span>', '',$field_to_print);
                    $field_to_print = str_replace('Presenza', '<div class="indicatore red">&nbsp;</div>',$field_to_print);
                    print $field_to_print;
                    ?>
                </ul>
                <?php
                }
                else {
                    print "<figcaption style='height:0;'>";
                }
                ?>

                <div class="description">
                    <h2>
                        <a href="<?php print $node_url;  ?>">
                            <?php
                            print $title;
                            ?>
                        </a>
                    </h2>
                </div>
            </figcaption>
        </figure>
    </div>
<?php


} else {
    ?>

    <div class="row">
        <div class="col-md-12">
            <div class="prodotto-bar">
                <?php
                if ($content['field_tipologia']) { ?>
                    <?php print render($content['field_tipologia']); ?>
                <?php } ?>
                <?php
                if ($content['field_abitudine_alimentare']) { ?>
                    <?php print render($content['field_abitudine_alimentare']); ?>
                <?php } ?>
            </div>
        </div>
    </div>
    <div class="col-md-3">

        <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
            <div class="prodotto-box">
                <div class="prodotto-cover">
                    <?php print render($content['field_immagine_copertina']); ?>
                </div>
            </div>
        </div>
        <div class="prodotto-gallery">
            <!--<h4 class="product_title">Gallery</h4>-->
            <?php print render($content['field_gallery']); ?>
        </div>
    </div>
    <div class="col-md-6 prodotto-scheda">
        <div class="classificazione">
            <div class="row">
                <!--<h2><a href="<?php //print $node_url; print $title; ?>"></a></h2>-->
                <div class="col-md-12">
                    <h2 class="product-name"><?php print $title; ?></h2>
                </div>
            </div>
            <div class="row">
                <div class="col-md-6 prodotto-marchio">
                    <?php
                    if ($content['field_marchio']) { ?>
                        <?php print render($content['field_marchio']); ?>
                    <?php }
                    ?>
                </div>
                <div class="col-md-6 prodotto-share">
                    <?php if ($node->language=="en") {?>
                        <span>CONDIVIDI </span>
                    <?php }
                    else {
                        ?>
                        <span>SHARE </span>
                    <?php
                    }
                    print render($content['sharethis']); ?>
                </div>
            </div>
            <?php
            /*                if ($content['field_abitudine_alimentare']){ */ ?><!--
                    <h6 class="product_title">Consigliato per:</h6>
                    <?php /*print render($content['field_abitudine_alimentare']); */ ?>
                --><?php /*} */ ?>
        </div>

                <?php
                $node_produttore = node_load($content['field_produttore']['#items'][0]['target_id']);
                if ($node_produttore) { ?>
                    <div class="row">
                        <div class="col-md-12" style="margin-top:15px;">
                    <?php
                            node_build_content($node_produttore);?>

                            <?php if ($node->language=="en") {?><div class="field-label">PRODUCER</div><?php } else { ?> <div class="field-label">PRODUTTORE</div> <?php } ?>
                            <?php print render($node_produttore->title);?>
                                    </div>
                            </div>
                            <div class="row">
                                <div class="col-md-12" style="margin-top:15px;">
                            <?php if ($node->language=="en") {?><div class="field-label">WEB SITE</div><?php } else { ?> <div class="field-label">SITO WEB</div> <?php } ?>
                            <a href="<?php print $node_produttore->content['field_sito_azienda']['#items']['0']['value'];?>" target="_blank">
                            <?php print render($node_produttore->content['field_sito_azienda']); ?>
                            </a>
                            </div>
                        </div>
                        <?php
                }
                ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_prodotto_a']); ?>
                </div>
            </div>
        <?php if ($content['body']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['body']); ?>
                </div>
            </div>
        <?php } ?>
        <?php if ($content['field_storia']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_storia']); ?>
                </div>
            </div>
        <?php } ?>
        <?php if ($content['field_filiera_prodotto']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_filiera_prodotto']); ?>
                </div>
            </div>
        <?php } ?>
        <?php if ($content['field_tecniche_di_produzione']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_tecniche_di_produzione']); ?>
                </div>
            </div>
        <?php } ?>
        <?php if ($content['field_tipologia_produzione']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_tipologia_produzione']); ?>
                </div>
            </div>
        <?php } ?>

        <div class="row">
            <div class="col-md-4">
                <?php if (($content['field_stagionalita_inizio']) && ($content['field_stagionalita_fine'])) { ?>
                    <h6><strong>Stagionalità:</strong> da <?php print render($content['field_stagionalita_inizio']); ?> a
                        <?php print render($content['field_stagionalita_fine']); ?></h6>
                <?php } ?>


            </div>
        </div>
        <div class="row">
            <?php if ($content['field_valore_energetico_kj_tx'] || $content['field_valore_energetico_kcal_tx'] || $content['field_valore_energetico_kcal_tx'] || $content['field_proteine_tx'] || $content['field_carboidrati_tx'] || $content['field_carboidrati_di_cui_sat_tx'] || $content['field_grassi_tx'] || $content['field_grassi_saturi_tx'] || $content['field_fibre_tx']
                || ($content['field_sodio_tx'] || $content['field_monoinsaturi_tx'] || $content['field_polinsaturi_tx'] || $content['field_polioli_tx'] || $content['field_amido_tx'] || $content['field_vitamine_tx']) || $content['field_minerali_tx'])
            {?>
                <div class="col-md-6 well product-valori-nutrizionali">
                    <?php print render($content['field_valore_energetico_kj_tx']); ?>
                    <?php print render($content['field_valore_energetico_kcal_tx']); ?>
                    <?php print render($content['field_proteine_tx']); ?>
                    <?php print render($content['field_grassi_tx']); ?>
                    <?php print render($content['field_grassi_saturi_tx']); ?>

                    <?php print render($content['field_carboidrati_tx']); ?>
                    <?php print render($content['field_carboidrati_di_cui_sat_tx']); ?>
                    <?php print render($content['field_monoinsaturi_tx']); ?>
                    <?php print render($content['field_polinsaturi_tx']); ?>

                    <?php print render($content['field_polioli_tx']); ?>
                    <?php print render($content['field_amido_tx']); ?>
                    <?php print render($content['field_fibre_tx']); ?>
                    <?php print render($content['field_sodio_tx']); ?>
                    <?php print render($content['field_vitamine_tx']); ?>
                    <?php print render($content['field_minerali_tx']); ?>

                </div>
            <?php } ?>

            <div class="col-md-6 product-ingredienti">
                <?php print render($content['field_ingredienti']); ?>
            </div>
        </div>
        <div class="row">
            <?php if ($content['field_ricette']['#items'])
            {
                ?>
                <div class="col-md-6 box-ricetta">
                    <i class="fa fa-cutlery"></i>
                    <?php if ($node->language=="en") {?>
                        <h5 class="produttore-label"> RECIPES </h5>
                    <?php }
                    else {?>
                        <h5 class="produttore-label"> RICETTE </h5>
                    <?php
                    }
                    foreach ($content['field_ricette']['#items'] as $ricettaKey => $ricettaValue) {

                        $node_ricetta = node_load($ricettaValue['target_id']);

                        if ($node_ricetta) {
                            node_build_content($node_ricetta);

                            $ricetta_url = url(drupal_get_path_alias('node/' . $node_ricetta->nid), array('absolute' => TRUE));

                            ?>

                            <div class="product-info-element">

                                <a href="<?php print $ricetta_url; ?>" target="_blank">
                                    <?php
                                    print render($node_ricetta->title);
                                    ?>
                                </a>
                            </div>

                        <?php
                        }
                    }
                    ?>
                </div>
            <?php
            }
            ?>
            <div class="col-md-6 box-ricetta" >
                <?php if ($content['field_turismo_ed_eventi'])
                {
                    ?>
                  <h5 class="produttore-label"><i class="fa fa-cutlery"></i>
                      <?php if ($node->language=="en") {?>
                    TOURISM AND EVENTS</h5>
                <?php }
                else {?>
                          TURISMO ED EVENTI</h5>
                      <?php
                }?>
                  </h5>
                  <?php print render($content['field_turismo_ed_eventi']); ?>

                <?php } ?>
            </div>
        </div>
    </div>


    <div class="col-md-3 column-allergeni">
        <div class="wrap-allergeni">
            <?php if ($node->language=="en") {?>
                <h5 class="product_title title-allergeni">Allergy and intolerance</h5>
            <?php }
            else {?>
                <h5 class="product_title title-allergeni">Allergie e intolleranze</h5>
            <?php    }
            $vid = taxonomy_vocabulary_machine_name_load('allergene');

            $vocab = taxonomy_get_tree($vid->vid);
            $terms = array();

            foreach ($vocab as $key => $value) {
                $is_parent = $vocab[$key]->parents[0];
                if ($is_parent == "0") {
                    $term = taxonomy_term_load($vocab[$key]->tid);
                    if ($node->language=="en")
                        $terms[$vocab[$key]->tid] = $term->name_field['en']['0']['value'];
                    else
                        $terms[$vocab[$key]->tid] = $term->name_field['it']['0']['value'];
                }
            }
            print "<ul class='tabella-allergeni'>";

            $all = array();

            foreach ($field_allergene as $key_allergene => $value_allergene) {
                if ($field_allergene[$key_allergene]['hs_lineages'][0]["level"] == 0)
                    $all[$value_allergene['tid']] = $field_allergene[$key_allergene + 1]['hs_lineages'][0]["label"];
            }

            foreach ($terms as $key => $value) {
                if ($all[$key] == "Presenza" || $all[$key] == "Tracce" || $all[$key] == "Presence" || $all[$key] == "Traces") {
                    print "<li class=\"alert-allergeni\">" . $value;
                } else {
                    print "<li>" . $value;
                }

                if ($all[$key] == "Presenza" or $all[$key] == "Presence") {
                    echo "<div class='indicatore red' style=''>&nbsp;</div></li>";
                } else {
                    if ($all[$key] == "Tracce" or $all[$key] == "Traces")
                        echo "<div class='indicatore yellow' style=''>&nbsp;</div></li>";
                }

            }
            print "</ul>";
            echo "<div class=\"legenda-indicatori\">";
            if ($node->language=="en") {
                echo "<div class='indicatore red' style=''>Presence</div>";
                echo "<div class='indicatore yellow' style=''>Trace</div>";
            }
            else {
                echo "<div class='indicatore red' style=''>Presenza</div>";
                echo "<div class='indicatore yellow' style=''>Tracce</div>";
            }
            echo "</div>";

            ?>

        </div>



    </div>

    <div class="row">
        <div class="col-md-12 prodotti-correlati">
            <?php
            $block = module_invoke('views', 'block_view', 'related_products-block');
            print render($block['content']);
            ?>
        </div>
    </div>
<?php
}
?>